#pragma once

struct Config
{
	int nParticles;

	static Config& getInstance()
	{
		static Config instance = init();
		return instance;
	}

private:
	static Config init() { return { 2 }; }
};