TARGET := iphone:clang:latest:11.0
ARCHS = arm64
INSTALL_TARGET_PROCESSES = YouTube
PACKAGE_VERSION = 1.0.2

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = YTReExplore

YTReExplore_FILES = Tweak.x
YTReExplore_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
