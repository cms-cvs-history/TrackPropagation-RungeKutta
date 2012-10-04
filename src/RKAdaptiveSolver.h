#ifndef RKAdaptiveSolver_H
#define RKAdaptiveSolver_H

#include "FWCore/Utilities/interface/Visibility.h"
#include "RKSolver.h"

template <typename T, 
	  template <typename,int> class StepWithPrec, 
	  int N>
class dso_internal RKAdaptiveSolver GCC11_FINAL : public RKSolver<T,N> {
public:

    typedef RKSolver<T,N>                       Base;
    typedef typename Base::Scalar               Scalar;
    typedef typename Base::Vector               Vector;

    virtual Vector operator()( Scalar startPar, const Vector& startState,
			       Scalar step, const RKDerivative<T,N>& deriv,
			       const RKDistance<T,N>& dist,
			       float eps);

};

#include "TrackPropagation/RungeKutta/src/RKAdaptiveSolver.icc"

#endif
