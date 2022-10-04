#pragma once
#include "../RadiatonDetector/RadiationDetector.h"
#include "../RadiatonDetector/HardwareInterfaceDisplay.h"
#include "gmock/gmock.h"

class MockHIDisplay : 
	public HardwareInterfaceDisplay

{
public:

	MOCK_METHOD(void, printMessage, (const std::string), (override, const));
};

