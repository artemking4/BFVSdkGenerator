// Object: WeatherSequencerControllerEntityData
// ClassId: 3920
// RuntimeId: 16647
// TypeInfo: 0x0000000144CFA7D0
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherSequencerControllerEntityData : public Entity::EntityData {
        Uint32 ShowGoToPackageSlotInputs; // 0x20
        char pad_0x24[0x4];
        Array<Int32> InputEventNameHashes; // 0x28
        Array<Int32> InstantGotoEventNameHashes; // 0x30
        CString ForcePackage; // 0x38
    }; // 0x40
    static_assert(sizeof(WeatherSequencerControllerEntityData) == 0x40);
}
#pragma pack(pop)