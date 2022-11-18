// Object: UnlockEntityData
// ClassId: 3853
// RuntimeId: 45088
// TypeInfo: 0x0000000144C323F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Guid.h"
#include "../Global/Boolean.h"
#include "../Casablanca/UnlockEntityLogic.h"
#include "../Casablanca/UnlockEntityPlayerQueryType.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UnlockEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Guid> UnlockGuids; // 0x28
        Casablanca::UnlockEntityLogic Logic; // 0x30
        Casablanca::UnlockEntityPlayerQueryType ContextPlayerQueryType; // 0x34
        Boolean ServerUsePrevIfNoCurrChar; // 0x38
        Boolean InvertTest; // 0x39
        Boolean ContextPlayer; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(UnlockEntityData) == 0x40);
}
#pragma pack(pop)