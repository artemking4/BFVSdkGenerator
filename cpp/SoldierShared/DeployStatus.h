// Object: DeployStatus
// RuntimeId: 7410
// TypeInfo: 0x0000000144F45DB0

namespace SoldierShared {
    enum DeployStatus {
        DeployStatus_Succeeded = 0,
        DeployStatus_NotSet = 1,
        DeployStatus_NoGroundBelow = 2,
        DeployStatus_CannotDeployOnTop = 3,
        DeployStatus_GroundNotFlat = 4,
        DeployStatus_CharacterNotOnGround = 5,
        DeployStatus_ObstacleCollision = 6,
        DeployStatus_ObstacleBetween = 7,
        DeployStatus_ObstacleAbove = 8,
        DeployStatus_OutsideCombatArea = 9,
        DeployStatus_UnderWater = 10,
        DeployStatus_ExplosionPackProximity = 11
    };
}