/*
 * gpio-client.hpp
 *
 *  Created on: 7 Nov 2018
 *      Author: dwd
 */

#pragma once

#include "gpio.hpp"

struct GpioClient: public Gpio
{
	int fd;
public:
	GpioClient();
	~GpioClient();
	bool setupConnection(const char* host, const char* port);
	bool update();
	bool setBit(uint8_t pos, uint8_t tristate);
};

