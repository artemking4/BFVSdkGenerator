// Object: GameEventCreatorEntityData
// ClassId: 2774
// RuntimeId: 34008
// TypeInfo: 0x0000000144D1E370
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/LocalPlayerId.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/GameEventCreatorInputProperty.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameEventCreatorEntityData : public Entity::EntityData {
        Core::LocalPlayerId LocalPlayerOverride; // 0x20
        Uint32 TypeNameHash; // 0x24
        Array<CasablancaShared::GameEventCreatorInputProperty> InputProperties; // 0x28
        Boolean SendToBothPlayers; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(GameEventCreatorEntityData) == 0x38);
}
#pragma pack(pop)