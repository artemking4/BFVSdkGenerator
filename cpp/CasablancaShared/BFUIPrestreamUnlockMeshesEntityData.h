// Object: BFUIPrestreamUnlockMeshesEntityData
// ClassId: 2347
// RuntimeId: 8614
// TypeInfo: 0x0000000144D81B20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObjectList.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPrestreamUnlockMeshesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::BFUIAppearanceInstanceObjectList PrestreamAppearances; // 0x30
        Int32 StreamFirstIndex; // 0x38
        Int32 StreamLastIndex; // 0x3C
        Int32 SelectedIndex; // 0x40
        Int32 StreamChunkSize; // 0x44
        Float32 StreamingLodLevelThreshold; // 0x48
        Boolean Stream; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(BFUIPrestreamUnlockMeshesEntityData) == 0x50);
}
#pragma pack(pop)