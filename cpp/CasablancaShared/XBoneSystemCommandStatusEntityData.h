// Object: XBoneSystemCommandStatusEntityData
// ClassId: 3926
// RuntimeId: 60413
// TypeInfo: 0x0000000144D28920
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/XBoneSystemPhrase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class XBoneSystemCommandStatusEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::XBoneSystemPhrase Phrase; // 0x24
        Boolean EnableAtStart; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(XBoneSystemCommandStatusEntityData) == 0x30);
}
#pragma pack(pop)