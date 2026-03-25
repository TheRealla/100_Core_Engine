#pragma once
#include <JuceHeader>

// --- Real-time Cable Physics ---
class PatchCable {
public:
    void paint(juce::Graphics& g, juce::Point<int> src, juce::Point<int> dst) {
        juce::Path p;
        p.startNewSubPath(src.toFloat());
        // Gravity-based Sag Physics
        float sag = std::sqrt(std::abs(src.x - dst.x)) * 4.0f + 40.0f;
        p.quadraticTo({(src.x + dst.x) * 0.5f, std::max(src.y, dst.y) + sag}, dst.toFloat());
        
        g.setColour(juce::Colours::orange.withAlpha(0.85f));
        g.strokePath(p, juce::PathStrokeType(2.5f));
    }
};

// --- Entropy 182-E Module UI ---
class EntropyModule : public ModuleComponent {
public:
    EntropyModule() : ModuleComponent("Entropy 182-E", juce::Colour(0xff1a0f0f)) {
        addAndMakeVisible(entropyKnob);
        inputs.add(new Port(*this, Port::Type::CVIn, "Raw CV", 0));
        outputs.add(new Port(*this, Port::Type::CVOut, "Drift Out", 0));
    }
private:
    juce::Slider entropyKnob;
};
