#include "SwWorldStateNodeType_LoadoutFlag.h"

void USwWorldStateNodeType_LoadoutFlag::OnLoadoutFlagChanged(FRsBitfield_HeroLoadoutFlags OldFlags, FRsBitfield_HeroLoadoutFlags NewFlags) {
}

USwWorldStateNodeType_LoadoutFlag::USwWorldStateNodeType_LoadoutFlag() {
    this->flag = ERsHeroLoadoutFlags::WallRunUnlocked;
}

