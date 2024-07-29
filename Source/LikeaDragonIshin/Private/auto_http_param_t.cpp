#include "auto_http_param_t.h"

Fauto_http_param_t::Fauto_http_param_t() {
    this->script_type = e_auto_script_type::nop;
    this->pad_type = e_auto_pad_type::none;
    this->lineno = 0;
    this->result = false;
    this->_ver = 0;
}

