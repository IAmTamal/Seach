// product schema
const mongoose = require("mongoose");

const UserSchema = new mongoose.Schema(
  {
    email: {
      type: String,
      required: true,
      unique: true,
    },
    username: {
      type: String,
    },
    todolist: [String],
  },
  { timetamps: true }
);

// module.exports = mongoose.models.Users || mongoose.model("Users", UserSchema);
export default mongoose.models.Users || mongoose.model("Users", UserSchema);
