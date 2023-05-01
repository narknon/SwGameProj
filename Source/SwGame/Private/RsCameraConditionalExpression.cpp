#include "RsCameraConditionalExpression.h"

URsCameraConditionalExpression::URsCameraConditionalExpression() {
    this->A = NULL;
    this->Operator = ERsCameraConditionalExpressionBooleanOperator::AND;
    this->B = NULL;
    this->bAllowEarlyOut = true;
}

