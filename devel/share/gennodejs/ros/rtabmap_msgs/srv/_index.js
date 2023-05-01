
"use strict";

let AddLink = require('./AddLink.js')
let CleanupLocalGrids = require('./CleanupLocalGrids.js')
let GetMap2 = require('./GetMap2.js')
let GetPlan = require('./GetPlan.js')
let GetMap = require('./GetMap.js')
let GlobalBundleAdjustment = require('./GlobalBundleAdjustment.js')
let ResetPose = require('./ResetPose.js')
let RemoveLabel = require('./RemoveLabel.js')
let GetNodeData = require('./GetNodeData.js')
let SetGoal = require('./SetGoal.js')
let GetNodesInRadius = require('./GetNodesInRadius.js')
let PublishMap = require('./PublishMap.js')
let DetectMoreLoopClosures = require('./DetectMoreLoopClosures.js')
let ListLabels = require('./ListLabels.js')
let SetLabel = require('./SetLabel.js')
let LoadDatabase = require('./LoadDatabase.js')

module.exports = {
  AddLink: AddLink,
  CleanupLocalGrids: CleanupLocalGrids,
  GetMap2: GetMap2,
  GetPlan: GetPlan,
  GetMap: GetMap,
  GlobalBundleAdjustment: GlobalBundleAdjustment,
  ResetPose: ResetPose,
  RemoveLabel: RemoveLabel,
  GetNodeData: GetNodeData,
  SetGoal: SetGoal,
  GetNodesInRadius: GetNodesInRadius,
  PublishMap: PublishMap,
  DetectMoreLoopClosures: DetectMoreLoopClosures,
  ListLabels: ListLabels,
  SetLabel: SetLabel,
  LoadDatabase: LoadDatabase,
};
