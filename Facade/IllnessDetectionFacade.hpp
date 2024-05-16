#ifndef ILLNESS_DETECTION_FACADE_HPP
#define ILLNESS_DETECTION_FACADE_HPP

#include "DataCollection.hpp"
#include "DataProcessing.hpp"
#include "DiagnosticAlgorithms.hpp"
#include "CommunicatingResults.hpp"

class IllnessDetectionFacade {
    public:
        void detectingIllness () {
            dataCollection_.collectData();
            dataProcessing_.processData();
            diagnosticAlgos_.runDiagnosticAlgorithms();
            communicator_.communicate();
        }
    
    private:
        DataCollection dataCollection_;
        DataProcessing dataProcessing_;
        DiagnosticAlgorithms diagnosticAlgos_;
        CommunicatingResults communicator_;
};

#endif // ILLNESS_DETECTION_FACADE_HPP