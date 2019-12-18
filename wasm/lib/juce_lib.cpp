#include "AppConfig.h"

// -- core
#include <unistd.h>
#include <signal.h>
#include "../../modules/juce_core/juce_core.cpp"
#include "../../modules/juce_core/native/juce_audioworklet.cpp"
#include "../../modules/juce_audio_basics/juce_audio_basics.cpp"
#include "../../modules/juce_dsp/juce_dsp.cpp"

// -- events
#include "../../modules/juce_events/juce_events.cpp"
#include "../../modules/juce_events/native/juce_audioworklet.cpp"
#include "../../modules/juce_data_structures/juce_data_structures.h"

// -- audio
#include "../../modules/juce_audio_devices/juce_audio_devices.cpp"
#include "../../modules/juce_audio_processors/juce_audio_processors.cpp"
#include "../../modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp"
