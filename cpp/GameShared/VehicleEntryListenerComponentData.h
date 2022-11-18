// Object: VehicleEntryListenerComponentData
// ClassId: 1870
// RuntimeId: 48634
// TypeInfo: 0x0000000144E9B990
#include "../Entity/GameComponentData.h"
#include "../GameShared/VehicleEntryListenerBinding.h"
#include "../GameShared/VehicleCameraControlBinding.h"
#include "../GameShared/VehicleEntryListenerReadBinding.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleEntryListenerComponentData : public Entity::GameComponentData {
        GameShared::VehicleEntryListenerBinding VehicleEntryListener; // 0x80
        GameShared::VehicleCameraControlBinding VehicleCameraControl; // 0x260
        GameShared::VehicleEntryListenerReadBinding ReadBinding; // 0x274
        Int32 AnimationEntitySpacePriority; // 0x2D8
        Float32 AnimationWheelTransformDelay; // 0x2DC
        Boolean ForceSoldierVisibleOnExitVehicle; // 0x2E0
        Boolean WaitingForAlignment; // 0x2E1
        char pad_0x2E2[0xE];
    }; // 0x2F0
    static_assert(sizeof(VehicleEntryListenerComponentData) == 0x2F0);
}
#pragma pack(pop)