# cmake-examples

Shareable examples and notes that document how I use CMake for projects and
customize its features. These are opinionated examples written by a
**Windows-native** user using **VS Code** for CMake projects.

The [core/](core/) folder contains the most minimal and basic setups while
[extras/](extras/) documents niche configurations that are a little more
specific to my environment or use-case.

Each sub-folder therein should be a **self-contained project** (or hierarchy of
projects) that can be configured, built, and run, aside from external tools like
vcpkg. They are short enough to be **understood by reading from top to bottom** to
understand how they're put together.

### CMake

CMake does not build your project but instead is a **meta build system** that
**produces project files** that can be understood by other IDEs or build
systems. This allows the same "Hello World" project to be built by a variety of
tools like Visual Studio, VS Code, GNU Make Tools, Ninja, or whatever else by
_generating_ project files for those systems instead of writing them explicitly.

It is also a complicated beast that becomes challenging with each layer you add.
A single project setup that gets generated via command-line invocation is
pretty straightforward. Adding things like presets, toolchain files, and magical
IDE integrations invites numerous opportunities for tools to change things in
ways that you can't see very easily.

For more information on CMake itself...

1. The repo that inspired this: [pr0g/cmake-examples](https://github.com/pr0g/cmake-examples/).
2. Martin Hořeňovský's blog posts on [Basic CMake usage (Part 1)](https://codingnest.com/basic-cmake/) and [(Part 2)](https://codingnest.com/basic-cmake-part-2/)

### VS Code

VS Code's CMake Tools allows it to open and understand CMake projects without
needing to explicitly generate the project yourself. It has extensive
[documentation on its GitHub repo](https://github.com/microsoft/vscode-cmake-tools/tree/main/docs)
that describe basic usage as well as advanced configuration and troubleshooting.

It adds its own twists and challenges to using CMake:

1. Unlike a direct invocation of CMake, you do not specify a generator to use (though it uses one implicitly)
    - You can specify one via presets (optional as of V3 presets)
2. Some properties, like `DEBUGGER_WORKING_DIRECTORY` are not honored when opened via VS Code
    - See [extras/debugger_cwd](extras/debugger_cwd) for a workaround
    - Related issue: [microsoft/vscode-cmake-tools#771](https://github.com/microsoft/vscode-cmake-tools/issues/771)
3. Using a preset changes the default binary directory (from `build/` to `out/build/${presetName}`)
    - You can change it back to `build/` by assigning `binaryDir`

### License

Licensed under the [MIT-0 license](LICENSE.md).
