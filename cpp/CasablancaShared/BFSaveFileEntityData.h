// Object: BFSaveFileEntityData
// ClassId: 2120
// RuntimeId: 53734
// TypeInfo: 0x0000000144D31420
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Core/LocalPlayerId.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSaveFileEntityData : public Entity::EntityData {
        Float32 TimeBetweenSaves; // 0x20
        Uint32 MaxDataIdLength; // 0x24
        Core::LocalPlayerId LocalPlayerId; // 0x28
        char pad_0x2C[0x4];
        CString FileName; // 0x30
        UIIncubatorShared::LocalizedString ContentName; // 0x38
    }; // 0x40
    static_assert(sizeof(BFSaveFileEntityData) == 0x40);
}
#pragma pack(pop)