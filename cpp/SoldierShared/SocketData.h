// Object: SocketData
// ClassId: 4632
// RuntimeId: 50029
// TypeInfo: 0x0000000144F39A90
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Core/LinearTransform.h"
#include "../SoldierShared/SocketObjectDataBase.h"
#include "../WeaponShared/GearSlot.h"
#include "../SoldierShared/SocketType.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SocketData : public Core::DataContainer {
        Guid UnlockAssetGuid; // 0x18
        Guid BelongsToUnlockAssetGuid; // 0x28
        CString BoneName; // 0x38
        Int32 BoneId; // 0x40
        char pad_0x44[0xC];
        Core::LinearTransform BoneRigidTransform; // 0x50
        Core::LinearTransform Transform; // 0x90
        Array<SoldierShared::SocketObjectDataBase> AvailableObjects; // 0xD0
        WeaponShared::GearSlot GearSlot; // 0xD8
        SoldierShared::SocketType SocketType; // 0xDC
        Boolean Excluded; // 0xE0
        Boolean UsesDefaultObject; // 0xE1
        Boolean DefaultEnableSocketEntities; // 0xE2
        Boolean ForceSocketEntitiesEnabled; // 0xE3
        Boolean HideByZoomTransition; // 0xE4
        Boolean HideByLightToggle; // 0xE5
        char pad_0xE6[0xA];
    }; // 0xF0
    static_assert(sizeof(SocketData) == 0xF0);
}
#pragma pack(pop)