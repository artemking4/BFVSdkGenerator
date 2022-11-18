// Object: PrivateGamesMapRotationBuilderEntityData
// ClassId: 3041
// RuntimeId: 54658
// TypeInfo: 0x0000000144D657F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PrivateGamesRotationBehavior.h"
#include "../CasablancaShared/PrivateGamesRoundBehavior.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"
#include "../CasablancaShared/PrivateGamesPlayground.h"
#include "../CasablancaShared/PrivateGamesMapRotationItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesMapRotationBuilderEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesRotationBehavior DefaultRotationBehavior; // 0x20
        CasablancaShared::PrivateGamesRoundBehavior DefaultRoundBehavior; // 0x24
        Int32 MaxSize; // 0x28
        char pad_0x2C[0x4];
        CasablancaShared::PrivateGamesBlueprint Blueprint; // 0x30
        CasablancaShared::PrivateGamesPlayground Playground; // 0x38
        Int32 SelectedMaxPlayersCount; // 0x40
        Int32 SelectedMinPlayersCount; // 0x44
        Int32 SelectedAllowedSpectatorsCount; // 0x48
        Int32 MapRotationEntryIndex; // 0x4C
        CasablancaShared::PrivateGamesMapRotationItem MapRotationItem; // 0x50
    }; // 0x58
    static_assert(sizeof(PrivateGamesMapRotationBuilderEntityData) == 0x58);
}
#pragma pack(pop)