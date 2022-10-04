#pragma once

#include "../RadiatonDetector/RadiationDetector.h"
#include "../RadiatonDetector/HardwareInterfaceAudio.h"

#include "gmock/gmock.h"

class MockHIAudio:
	 public HardwareInterfaceAudio
{
public:
	MOCK_METHOD(void, makeSound,(), (override));
};

