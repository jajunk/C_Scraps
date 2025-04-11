# Visual Studio Code Setup Guide for Fedora

This guide provides step-by-step instructions for installing and configuring Visual Studio Code on Fedora Linux machines, covering both x86_64 and ARM64 architectures.

## Table of Contents
- [Checking System Architecture](#checking-system-architecture)
- [Setup for x86_64 (Standard Fedora Workstation)](#setup-for-x86_64-standard-fedora-workstation)
- [Setup for ARM64 (aarch64)](#setup-for-arm64-aarch64)
- [Configuring VS Code as Default Editor](#configuring-vs-code-as-default-editor)
- [Setting File Associations](#setting-file-associations)
- [Troubleshooting](#troubleshooting)

## Checking System Architecture

⚠️ **Important**: Before installation, verify your system architecture to use the correct installation method.

```bash
# Check system architecture
uname -m
```

This command will return:
- `x86_64` for 64-bit Intel/AMD systems
- `aarch64` for ARM64 systems

## Setup for x86_64 (Standard Fedora Workstation)

### 1. Import Microsoft GPG Key

```bash
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
```

### 2. Add VS Code Repository

```bash
sudo sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" > /etc/yum.repos.d/vscode.repo'
```

### 3. Update Package List and Install VS Code

```bash
sudo dnf check-update
sudo dnf install -y code
```

### 4. Verify Installation

```bash
code --version
```

## Setup for ARM64 (aarch64)

### 1. Import Microsoft GPG Key

```bash
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
```

### 2. Add VS Code Repository

```bash
sudo sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" > /etc/yum.repos.d/vscode.repo'
```

### 3. Update Package List and Install VS Code

```bash
sudo dnf check-update
sudo dnf install -y code
```

**Note**: If the standard repository doesn't work for ARM64, you have two alternatives:

#### Alternative 1: Use VS Code OSS from Fedora repositories

```bash
sudo dnf install -y code
```

#### Alternative 2: Use the .rpm package directly

Download the appropriate .rpm package from the [VS Code website](https://code.visualstudio.com/Download) and install it:

```bash
# Replace the filename with the actual downloaded file
sudo dnf install -y ./code-*.rpm
```

### 4. Verify Installation

```bash
code --version
```

## Configuring VS Code as Default Editor

### For Terminal Programs (git, etc.)

Add the following to your `~/.bashrc` (or `~/.zshrc` if using zsh):

```bash
# Set VS Code as default editor
export EDITOR="code --wait"
export VISUAL="code --wait"
```

Then reload your configuration:

```bash
source ~/.bashrc  # or source ~/.zshrc
```

### Verify the Configuration

```bash
echo $EDITOR
echo $VISUAL
```

Both should show: `code --wait`

## Setting File Associations

### GUI Method (GNOME)

1. Right-click on a .txt file
2. Select "Properties"
3. Click on the "Open With" tab
4. Select "Visual Studio Code" from the list
5. Click "Set as default"

### Command Line Method

```bash
# Set VS Code as default application for text files
xdg-mime default code.desktop text/plain
```

### Verify File Associations

```bash
# Check default application for text files
xdg-mime query default text/plain
```

Should return: `code.desktop`

## Troubleshooting

### Command Not Found

If `code` command is not found after installation:

```bash
# Find the VS Code executable
sudo find / -name code -type f 2>/dev/null

# Add to PATH if necessary (change path if different)
echo 'export PATH="$PATH:/usr/bin"' >> ~/.bashrc
source ~/.bashrc
```

### Package Installation Failures

If you encounter GPG key errors:

```bash
# Re-import the key
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
```

If repository issues persist:

```bash
# Check for repository errors
sudo dnf check-update --disablerepo="*" --enablerepo="code"
```

---

Created: April 10, 2025

