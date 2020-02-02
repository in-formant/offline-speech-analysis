#ifndef REAPER_MAIN_H
#define REAPER_MAIN_H

#include "core/track.h"
#include "epoch_tracker/epoch_tracker.h"

Track* MakeEpochOutput(EpochTracker &et, float unvoiced_pm_interval);

Track* MakeF0Output(EpochTracker &et, float resample_interval, Track** cor);

bool ComputeEpochsAndF0(EpochTracker &et, float unvoiced_pulse_interval,
			float external_frame_interval,
			Track** pm, Track** f0, Track** corr);

#endif // REAPER_MAIN_H
