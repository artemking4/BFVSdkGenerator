// Object: BFUIPlayerVoipInfoEntityData
// ClassId: 2343
// RuntimeId: 24082
// TypeInfo: 0x0000000144D86D20
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerVoipInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Uint64 PlayerOnlineId; // 0x28
        Boolean UpdateOnStart; // 0x30
        Boolean UpdateAutomatically; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(BFUIPlayerVoipInfoEntityData) == 0x38);
}
#pragma pack(pop)