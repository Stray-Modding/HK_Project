#include "InteractionFeedback.h"

class UCatUsableComponentBase;

void AInteractionFeedback::OnUsableChanged_Implementation(UCatUsableComponentBase* _previousUsable, UCatUsableComponentBase* _currentUsable) {
}

UCatUsableComponentBase* AInteractionFeedback::GetUsable() const {
    return NULL;
}

TEnumAsByte<EInteractionFeedbackState> AInteractionFeedback::GetState() const {
    return InteractionFeedbackState_Ignored;
}

AInteractionFeedback::AInteractionFeedback() {
    this->m_usable = NULL;
}

