// Object: ForceManagerSettings
// ClassId: 1642
// RuntimeId: 966
// TypeInfo: 0x0000000144EC9360
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WorldSim {
    class ForceManagerSettings : public Core::DataContainer {
        Float32 VectorFieldNormValue; // 0x18
        Float32 VectorFieldCellSize; // 0x1C
        Float32 VectorFieldPlanarHeightPosition; // 0x20
        Float32 VectorFieldSizeX; // 0x24
        Float32 VectorFieldSizeY; // 0x28
        Float32 VectorFieldSizeZ; // 0x2C
        Float32 VectorFieldCenterX; // 0x30
        Float32 VectorFieldCenterY; // 0x34
        Float32 VectorFieldCenterZ; // 0x38
        Float32 VectorFieldPointSize; // 0x3C
        Boolean WindEnable; // 0x40
        Boolean ForcesEnable; // 0x41
        Boolean DrawStats; // 0x42
        Boolean DrawWindGraph; // 0x43
        Boolean DrawBoundingVolumes; // 0x44
        Boolean DrawSelectionBoundingVolumes; // 0x45
        Boolean DrawSelectionVectorField; // 0x46
        Boolean DrawSelectionForceVectorField; // 0x47
        Boolean DrawPlanarVectorField; // 0x48
        Boolean DrawExternalVectorField; // 0x49
        Boolean VectorFieldEnableWind; // 0x4A
        Boolean VectorFieldEnableSphere; // 0x4B
        Boolean VectorFieldEnableCone; // 0x4C
        Boolean VectorFieldEnableBaked; // 0x4D
        Boolean VectorFieldCameraCentered; // 0x4E
        Boolean VectorFieldArrow; // 0x4F
        Boolean VectorFieldLockSelection; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(ForceManagerSettings) == 0x58);
}
#pragma pack(pop)