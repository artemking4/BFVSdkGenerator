// Object: LevolutionMessageEntityData
// ClassId: 2833
// RuntimeId: 62560
// TypeInfo: 0x0000000144C42EF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Casablanca/LevolutionType.h"
#include "../Global/CString.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Casablanca {
    class LevolutionMessageEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform WorldPosition; // 0x30
        Casablanca::LevolutionType LevolutionType; // 0x70
        char pad_0x74[0x4];
        CString LevolutionId; // 0x78
    }; // 0x80
    static_assert(sizeof(LevolutionMessageEntityData) == 0x80);
}
#pragma pack(pop)