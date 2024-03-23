#!/bin/zsh
set -eux
cargo build --release
cp target/release/difft ~/.local/bin

