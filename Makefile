PROJECT = Roads
CPP_FILES = osc.cpp

# Allow overriding the LOGUE_SDK_DIR if compiling via Docker or CI
LOGUE_SDK_DIR ?= ../..
include $(LOGUE_SDK_DIR)/build/osc/project.mk
