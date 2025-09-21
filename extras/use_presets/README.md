# use_presets

The "base" configure preset explicitly defines the "binaryDir" value as "build"
which appears to be the default that's used when working with these projects in
VS Code. If this isn't set, it appears to default to something like
"out/build/${presetName}" or as in, if using the "base" preset, it would
be "out/build/base".
