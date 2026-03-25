
---

# System‑100X: TheRealla Edition
### **High-Fidelity Modular Synthesis & Neural Patching Ecosystem**

The **System‑100X** is a digital reconstruction of the classic 100M-style modular architecture, reimagined through the lens of non-linear DSP and automated neural routing. Designed for the **Amorph** environment and **JUCE**, it replaces standard linear math with transcendental curves and "expensive" electromagnetic saturation.

---

## 🌀 The Core Philosophy: Sound Entropy
At the heart of the System‑100X is the concept of **Sound Entropy**—the controlled decay of information as it passes through virtual transformer cores and vacuum-tube stages. 

* **Transcendental DSP**: Moving beyond the grid. We use sigmoid-based saturation and Topology Preserving Transform (TPT) filters to capture the "unsettling" warmth of early 20th-century optical synthesis.
* **Temanforce™ Tension**: A custom-modeled mastering stage that simulates electromagnetic transformer pull, introducing Vari-Mu style compression and magnetic hysteresis.
* **Neural Topology**: An AI-integrated patching system that uses **PatchDNA** JSON to "invent" complex routing logic across the 173-Gate Matrix.

---

## 📂 The 10-Module Rack

| Module | Designation | Function |
| :--- | :--- | :--- |
| **112** | VCO | Dual Oscillator with transcendental wave-shaping. |
| **121** | VCF | Non-linear 24dB Lowpass with "Blackbox" saturation. |
| **130** | VCA | Dual Voltage Controlled Amplifier with Vari-Mu curves. |
| **140** | LFO/EG | Dual Envelope Generator and Modulation Source. |
| **150** | S&H/Noise | Sample & Hold with 1927 Photoelectric Noise floor. |
| **165** | Portamento | Glissando control for "Geometric Phrygian" glides. |
| **172** | FX | Phase-shifter and Flanger with "Chaos-in-Delay" logic. |
| **173** | Matrix | 4x4 Central Patch-Hub for Gate and CV routing. |
| **182** | Sequencer | 16-step CV/Gate source with Scale-aware Quantization. |
| **182-E** | Entropy | **NEW**: Probability engine for thermal drift and logic erosion. |

---

## 🛠 Installation & Compilation

### **1. DSP Kernels (Amorph/Cmajor)**
The core audio engine is written in **Cmajor**. To run the artist processor:
1.  Copy `Amorph_System100X_Artist.cmajor` into your Amorph directory.
2.  The UI will automatically generate sliders for **Global Entropy** and **Temanforce Tension**.

### **2. JUCE Framework**
For the full plugin experience with **PatchCable Physics**:
```bash
# Clone the repository
git clone https://github.com/TheRealla/System-100X.git
cd System-100X

# Build via CMake
cmake -B build
cmake --build build --config Release
```

---

## 🔒 Security & Licensing
* **License**: Developed under the **Seals Estate** framework.
* **MSV-SpyBlocker**: Includes a kernel-level bash script for protecting repository integrity and blocking unauthorized telemetry probes.

---

## 📜 Artist Statement
> "Entropy is not the end of the sound; it is the soul of the machine. The System-100X is an intimate, melancholic reflection—a tribute to the ghosts in the wires." — **TheRealla**

---

### **Next Step for TheRealla:**
The **System‑100X** is now technically complete.
