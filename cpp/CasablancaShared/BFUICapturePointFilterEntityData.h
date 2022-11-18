// Object: BFUICapturePointFilterEntityData
// ClassId: 2168
// RuntimeId: 13424
// TypeInfo: 0x0000000144D302A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUICapturePointList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICapturePointFilterEntityData : public Entity::EntityData {
        CasablancaShared::BFUICapturePointList CapturePointList; // 0x20
        Boolean ExcludeUnspawnable; // 0x28
        Boolean ExcludeInvisible; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUICapturePointFilterEntityData) == 0x30);
}
#pragma pack(pop)