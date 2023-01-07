load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "hello-time",
    srcs = ["hello-time.cc"],
    hdrs = ["hello-time.h"],
    visibility = ["//main:__pkg__"],
)

cc_library(
    name = "add",
    srcs = ["add.cc"],
    hdrs = ["add.h"],
    visibility = [
        "//main:__pkg__",
        "//test:__pkg__",
    ],
)
