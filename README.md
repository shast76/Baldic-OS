# Baldic OS 🌀

<img src="docs/Baldic OS Logo with Background.png" alt="Baldic OS Logo" width="220" />

> **A modern, hybrid Linux distribution built on Debian 13 (Trixie), featuring the MetroWiz desktop environment and seamless cross-platform app support.**

Baldic OS is an independent Linux distribution designed to unite performance, aesthetics, and versatility. By combining the stability of Debian 13 with a custom-patched kernel and a unique UI language, Baldic OS delivers a unified experience across Linux, Android, and Windows applications.

---

## ✨ Key Features

* **Debian 13 (Trixie) Base:** Unshakeable system stability with access to robust APT repositories.
* **Baldic Kernel:** Custom-patched Linux kernel with native `BinderFS` and `Ashmem` support for high-performance Android execution.
* **MetroWiz Shell:** A unique Qt6/QML desktop environment blending **Frutiger Metro** typography with **TouchWiz** glass aesthetics and *Liquid Glass* animations.
* **`baldic-cored` Daemon:** Smart system resource manager that intelligently manages background Android (Waydroid) and Windows (Proton/Wine) runtimes.
* **Hybrid Application Ecosystem:** Integrated app store designed to handle Linux packages, Android APKs, and Windows software under one roof.

---

## 🏗 System Architecture

```text
+-------------------------------------------------------+
|                    MetroWiz Shell                     |
|           (Qt6 / QML + Wayland Compositor)            |
+-------------------------------------------------------+
|                     Baldic Store                      |
|         (APT / Flatpak | Waydroid | Proton)           |
+-------------------------------------------------------+
|                     baldic-cored                      |
|            (Resource & Lifecycle Daemon)              |
+-------------------------------------------------------+
|                     Baldic Kernel                     |
|           (Linux Kernel + BinderFS / Ashmem)          |
+-------------------------------------------------------+
|                   Debian 13 Base                      |
+-------------------------------------------------------+

**Ataby OS** is an innovative, hybrid Linux-based operating system designed to bridge performance and aesthetics. It seamlessly runs native Linux apps, Android applications, and Windows games under a unified ecosystem with custom intelligent resource management.

---

## 🎨 Visual Identity: MetroWiz

Baldic OS introduces **MetroWiz**, a modern desktop shell combining nostalgia and fluid design:
* **Frutiger Metro:** Dynamic, bold, typography-driven Live Tiles.
* **TouchWiz Aesthetics:** Soft squircle geometry, glassmorphism, fluid water/ripple effects, and smooth animations.
* **Signature Palette:** Vibrant neon pink (`#FF52D9`) and deep purple (`#9143FF`) accents over dark themes.

---

## 📁 Repository Structure

```text
├── docs/             # GitHub Pages & documentation assets
├── kernel/           # Custom kernel build configs, patches, and driver modules
├── services/         # ataby-cored system management service codebase
└── shell/            # MetroWiz UI desktop shell (Qt6 / QML)
