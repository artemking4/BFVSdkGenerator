// Object: AnimationProxyBankData
// ClassId: 2056
// RuntimeId: 48307
// TypeInfo: 0x0000000144E84C40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimationProxyBankData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Ant::AntRef ProxyBank; // 0x24
        Ant::AntRef ProxyBankPointer; // 0x38
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(AnimationProxyBankData) == 0x50);
}
#pragma pack(pop)