#include "EU4World.h"
#include "Log.h"
#include <filesystem>
namespace fs = std::filesystem;
#include "../Configuration/Configuration.h"

EU4::World::World(const CK3::World& sourceWorld, const Configuration& theConfiguration, const mappers::ConverterVersion& converterVersion)
{
	LOG(LogLevel::Info) << "*** Hello EU4, let's get painting. ***";

	// And finally, the Dump.
	LOG(LogLevel::Info) << "---> The Dump <---";
	modFile.outname = theConfiguration.getOutputName();
	output(converterVersion, theConfiguration, sourceWorld);
	LOG(LogLevel::Info) << "*** Farewell EU4, granting you independence. ***";
}