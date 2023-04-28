#include "Dialogue.h"

TArray<FDialogueNode> UDialogue::GetNextNodes(FDialogueNode Node) const {
    return TArray<FDialogueNode>();
}

FDialogueNode UDialogue::GetFirstNode() const {
    return FDialogueNode{};
}

void UDialogue::CleanOuter() {
}

void UDialogue::AssignPersistentOuter(UGameInstance* inGameInstance) {
}

UDialogue::UDialogue() {
    // Null default object.
}

