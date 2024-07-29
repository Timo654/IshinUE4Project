#include "DiEventParams_Gradation.h"

FDiEventParams_Gradation::FDiEventParams_Gradation() {
    this->_paramAnim = false;
    this->_paramAlphaInOut = false;
    this->sp_type = EGradationSpecialType::Invalid;
    this->Depth = 0.00f;
    this->_normalBlend = EGradationBlend::Invalid;
    this->b_l_length = 0.00f;
    this->b_l_length_nf = 0.00f;
    this->b_r_length = 0.00f;
    this->b_r_length_nf = 0.00f;
    this->b_rotate = 0.00f;
    this->a_l_length = 0.00f;
    this->a_l_length_nf = 0.00f;
    this->a_r_length = 0.00f;
    this->a_r_length_nf = 0.00f;
    this->a_rotate = 0.00f;
    this->_useCircle = false;
    this->_circleTrans = false;
    this->_circleNode = false;
    this->_circleFollow = false;
    this->_circleMulti = false;
    this->_circleMultiAuto = false;
}

