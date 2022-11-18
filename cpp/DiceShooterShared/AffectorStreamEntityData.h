// Object: AffectorStreamEntityData
// ClassId: 3945
// RuntimeId: 64046
// TypeInfo: 0x0000000144DF3670
#include "../Entity/LogicReferenceObjectData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class AffectorStreamEntityData : public Entity::LogicReferenceObjectData {
        Array<Uint32> StreamIdList; // 0xC0
        Boolean EnableStreaming; // 0xC8
        Boolean IgnoreNetworkedCheck; // 0xC9
        char pad_0xCA[0x6];
    }; // 0xD0
    static_assert(sizeof(AffectorStreamEntityData) == 0xD0);
}
#pragma pack(pop)