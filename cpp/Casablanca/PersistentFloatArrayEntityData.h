// Object: PersistentFloatArrayEntityData
// ClassId: 2943
// RuntimeId: 38337
// TypeInfo: 0x0000000144C324F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PersistentFloatArrayEntityData : public Entity::EntityData {
        Float32 InValue; // 0x20
        Boolean UpdateValueOnPropertyChanged; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(PersistentFloatArrayEntityData) == 0x28);
}
#pragma pack(pop)