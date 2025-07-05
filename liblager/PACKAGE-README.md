# liblager - C++ library for value-oriented design

This is a `build2` package for the [`lager`](https://github.com/arximboldi/lager) C++ library. It assist value-oriented design by implementing the unidirectional data-flow architecture.

## Usage

To start using `liblager` in your project, add the following [`depends`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifest-package-depends) value to your [`manifest`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifests), adjusting the version constraint as appropriate:

```
depends: liblager ^0.1.1
```

Then import the library in your `buildfile`:

```
import libs = liblager%lib{lager}
```

Note: If you're using MSVC, you must explicitly pass the `/Zc:preprocessor` flag to enable the standard-conforming preprocessor. Without it, MSVC may fail to correctly parse certain constructs used in liblager.

```
cxx.poptions += "/Zc:preprocessor"
```

## Importable targets

This package provides the following importable targets:

```
lib{lager}
```

### Importable targets description

* `lager` - C++ library for value-oriented design.
