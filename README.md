# PrimLife

This repository contains the skeleton Unreal Engine project for **PrimLife**, a spiritual successor to Jason Spofford's *Primordial Life*.

## Project Structure

- `PrimLife/` - Unreal project directory containing source, config, and content.
- `Source/PrimLife/` - C++ game module.
- `Content/` - Assets and Blueprints.

## Getting Started

1. Install **Unreal Engine 5** (recommended 5.3 or newer).
2. Clone this repository and open `PrimLife.uproject` with the Unreal Editor.
3. When prompted, build the project. The engine will generate solution files for your IDE.
4. Modify or create new C++ classes and Blueprints under the `Source` and `Content` folders respectively.

## Local Testing

To test the project locally:

1. Open `PrimLife.uproject` in the Unreal Editor.
2. Compile the project from the editor or from your IDE (e.g., Visual Studio or Rider).
3. Click **Play** to run the default map. You can add your own maps and assets under `Content/`.

Any additional dependencies or plugins can be added through the Unreal Editor's plugin browser.

## Neon Line Example

The `NeonLineActor` class demonstrates drawing a bright red line using debug
drawing. Add this actor to an empty level with a black background to mimic the
look of a neon light. You can adjust the line's start and end points, color
intensity, and thickness in the Details panel after placing it in the scene.
