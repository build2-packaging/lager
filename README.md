# lager - C++ library for value-oriented design

This is a [`build2`](https://build2.org/) package repository for [`lager`](https://github.com/arximboldi/lager), a library to assist value-oriented design by implementing the unidirectional data-flow architecture.

This file contains setup instructions and other details that are more appropriate for development rather than consumption. If you want to use [`lager`](https://github.com/arximboldi/lager) in your [`build2`](https://build2.org/)-based project, then instead see the accompanying [`PACKAGE-README.md`](liblager/PACKAGE-README.md) file.

The development setup for [`lager`](https://github.com/arximboldi/lager) uses the standard [`bdep`](https://build2.org/bdep/doc/bdep.xhtml)-based workflow.
For example:

```
git clone .../lager.git
cd lager

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
