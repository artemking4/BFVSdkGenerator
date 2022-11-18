// Object: UIVoiceEntityData
// ClassId: 3786
// RuntimeId: 17310
// TypeInfo: 0x0000000144D21270
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVoiceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 RadioVOType; // 0x24
        Int32 ContextVOType; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(UIVoiceEntityData) == 0x30);
}
#pragma pack(pop)