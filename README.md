# lager - <SUMMARY>

This is a `build2` package repository for [`lager`](https://<UPSTREAM-URL>),
a <SUMMARY-OF-FUNCTIONALITY>.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`lager` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](<PACKAGE>/PACKAGE-README.md) file.

The development setup for `lager` uses the standard `bdep`-based workflow.
For example:

```
git clone .../lager.git
cd lager

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
