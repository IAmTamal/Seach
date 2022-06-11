import connectDb from "../../../middleware/db";
import Users from "../../../models/UserSchema";

const handler = async (req, res) => {
  await Users.findOneAndUpdate(
    {
      email: req.body.email,
    },
    {
      $push: {
        todolist: req.body.note,
      },
    }
  );

  return res.status(200).json("OKAY");
};

export default connectDb(handler);
