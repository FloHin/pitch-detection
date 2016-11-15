//
// Created by sevag on 4/28/15.
//

#ifndef MPM_DFT_H
#define MPM_DFT_H

#include "pitch_detector.h"

class dft: public PitchDetector
{

private:
	double sampling_rate;
	int data_size;

	dft() { }

public:
	dft(double sampling_rate, int size);

	double get_pitch(double *data);

	void cleanup();
	void resize(double new_sampling_rate, int newsize);
};

#endif //MPM_DFTL_H