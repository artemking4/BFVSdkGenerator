// Object: BFUICapturePointInfoEntityData
// ClassId: 2169
// RuntimeId: 48043
// TypeInfo: 0x0000000144D301A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUICapturePointObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICapturePointInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUICapturePointObject CapturePoint; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUICapturePointInfoEntityData) == 0x30);
}
#pragma pack(pop)