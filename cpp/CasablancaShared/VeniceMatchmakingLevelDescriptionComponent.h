// Object: VeniceMatchmakingLevelDescriptionComponent
// ClassId: 4225
// RuntimeId: 17199
// TypeInfo: 0x0000000144D2A520
#include "../GameShared/LevelDescriptionComponent.h"
#include "../CasablancaShared/OnlineMod.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceMatchmakingLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        CasablancaShared::OnlineMod Mod; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(VeniceMatchmakingLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)