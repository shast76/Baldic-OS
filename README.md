# Baldic OS 🌀

<img src="docs/Baldic OS_20260904_204219_0000.png" alt="Baldic OS Logo" width="220" />

> **A modern, hybrid Linux distribution built on Debian 13 (Trixie), featuring the MetroWiz desktop environment and seamless cross-platform app support.**

Baldic OS is an independent Linux distribution designed to unite performance, aesthetics, and versatility. By combining the stability of Debian 13 with a custom-patched kernel and a unique UI language, Baldic OS delivers a unified experience across Linux, Android, and Windows applications.

---

## ✨ Key Features

* **Debian 13 (Trixie) Base:** Unshakeable system stability with access to robust APT repositories.
* **Baldic Kernel:** Custom-patched Linux kernel with native `BinderFS` and `Ashmem` support for high-performance Android execution.
* **MetroWiz Shell:** A unique Qt6/QML desktop environment blending **Frutiger Metro** typography with **TouchWiz** glass aesthetics and *Aero* animations.
* **`baldic-cored` Daemon:** Smart system resource manager that intelligently manages background Native Android Runtime (BinderFS/Ashmem) and Windows (Proton/Wine) runtimes
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
