#pragma once
#include "ModuleComponents.h"

class NeuralCableGenerator {
public:
    static void applyDNA(juce::ValueTree dna, juce::Component& canvas, juce::OwnedArray<PatchCable>& cables) {
        cables.clear();
        auto wiring = dna.getChildWithName("wiring_loom");
        for (auto connection : wiring) {
            // Automated look-up and physical connection logic
            auto* src = findModule(canvas, connection["src"]);
            auto* dst = findModule(canvas, connection["dst"]);
            if (src && dst) cables.add(new PatchCable());
        }
        canvas.repaint();
    }
    
    static ModuleComponent* findModule(juce::Component& c, juce::String name) {
        for (auto* child : c.getChildren())
            if (auto* m = dynamic_cast<ModuleComponent*>(child))
                if (m->moduleName == name) return m;
        return nullptr;
    }
};
